
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nls_table {int (* uni2char ) (int ,unsigned char*,int) ;int charset; } ;
typedef int ntfschar ;
struct TYPE_3__ {int sb; struct nls_table* nls_map; } ;
typedef TYPE_1__ ntfs_volume ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int const VAR_5 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int,int ) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,unsigned char*,int) ;

int FUNC_6(const ntfs_volume *VAR_6, const ntfschar *VAR_7,
  const int VAR_8, unsigned char **VAR_9, int VAR_10)
{
 struct nls_table *VAR_11 = VAR_6->nls_map;
 unsigned char *VAR_12;
 int VAR_13, VAR_14, VAR_15, VAR_16;


 if (VAR_7) {
  VAR_12 = *VAR_9;
  VAR_15 = VAR_10;
  if (VAR_12 && !VAR_15) {
   VAR_16 = -VAR_2;
   goto conversion_err;
  }
  if (!VAR_12) {
   VAR_15 = VAR_8 * VAR_5;
   VAR_12 = FUNC_1(VAR_15 + 1, VAR_4);
   if (!VAR_12)
    goto mem_err_out;
  }
  for (VAR_13 = VAR_14 = 0; VAR_13 < VAR_8; VAR_13++) {
retry: VAR_16 = VAR_11->uni2char(FUNC_2(VAR_7[VAR_13]), VAR_12 + VAR_14,
     VAR_15 - VAR_14);
   if (VAR_16 > 0) {
    VAR_14 += VAR_16;
    continue;
   } else if (!VAR_16)
    break;
   else if (VAR_16 == -VAR_2 && VAR_12 != *VAR_9) {
    unsigned char *VAR_17;

    VAR_17 = FUNC_1((VAR_15 + 64) &
      ~63, VAR_4);
    if (VAR_17) {
     FUNC_3(VAR_17, VAR_12, VAR_15);
     VAR_15 = ((VAR_15 + 64) & ~63) - 1;
     FUNC_0(VAR_12);
     VAR_12 = VAR_17;
     goto retry;
    }
   }
   goto conversion_err;
  }
  VAR_12[VAR_14] = 0;
  *VAR_9 = VAR_12;
  return VAR_14;
 }
 FUNC_4(VAR_6->sb, "Received NULL pointer.");
 return -VAR_1;
conversion_err:
 FUNC_4(VAR_6->sb, "Unicode name contains characters that cannot be "
   "converted to character set %s.  You might want to "
   "try to use the mount option nls=utf8.", VAR_11->charset);
 if (VAR_12 != *VAR_9)
  FUNC_0(VAR_12);
 if (VAR_16 != -VAR_2)
  VAR_16 = -VAR_0;
 return VAR_16;
mem_err_out:
 FUNC_4(VAR_6->sb, "Failed to allocate name!");
 return -VAR_3;
}
