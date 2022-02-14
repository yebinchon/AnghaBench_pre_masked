
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbnode {char const* n_rpath; int n_rplen; } ;
struct smb_vc {int dummy; } ;
struct mbchain {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct smb_vc*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct smb_vc*) ;
 int FUNC_2 (struct mbchain*) ;
 int FUNC_3 (struct mbchain*,char) ;
 int FUNC_4 (struct mbchain*,char) ;
 int FUNC_5 (struct mbchain*,struct smb_vc*,char const*,int,int) ;

int
FUNC_6(struct mbchain *VAR_3, struct smb_vc *VAR_4, struct smbnode *VAR_5,
 const char *VAR_6, int VAR_7)
{
 int VAR_8 = VAR_0;
 int VAR_9;

 if (FUNC_1(VAR_4)) {
  VAR_9 = FUNC_2(VAR_3);
  if (VAR_9)
   return VAR_9;
 }
 if (FUNC_0(VAR_4) < VAR_2)
  VAR_8 |= VAR_1;
 if (VAR_5 != ((void*)0)) {
  VAR_9 = FUNC_5(VAR_3, VAR_4, VAR_5->n_rpath, VAR_5->n_rplen,
      VAR_8);
  if (VAR_9)
   return VAR_9;
  if (VAR_6) {

   if (FUNC_1(VAR_4))
    VAR_9 = FUNC_3(VAR_3, '\\');
   else
    VAR_9 = FUNC_4(VAR_3, '\\');
   if (VAR_9)
    return VAR_9;

   VAR_9 = FUNC_5(VAR_3, VAR_4, VAR_6, VAR_7, VAR_8);
   if (VAR_9)
    return VAR_9;
  }
 }

 if (FUNC_1(VAR_4))
  VAR_9 = FUNC_3(VAR_3, 0);
 else
  VAR_9 = FUNC_4(VAR_3, 0);
 return VAR_9;
}
