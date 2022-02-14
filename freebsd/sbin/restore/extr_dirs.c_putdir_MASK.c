
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct direct {scalar_t__ d_ino; int d_reclen; scalar_t__ d_namlen; scalar_t__ d_type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ,struct direct*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct direct*) ;
 int VAR_5 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_4(char *VAR_6, size_t VAR_7)
{
 struct direct *VAR_8;
 size_t VAR_9, VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_7; ) {
  VAR_8 = (struct direct *)(VAR_6 + VAR_9);
  if (VAR_0)
   FUNC_2((u_char *)"ls", (u_char *) VAR_8);
  if (VAR_4 && VAR_8->d_ino != 0) {

   if (VAR_0)
    VAR_8->d_namlen = VAR_8->d_type;




   VAR_8->d_type = VAR_2;
  }
  VAR_10 = VAR_1 - (VAR_9 & (VAR_1 - 1));
  if ((VAR_8->d_reclen & 0x3) != 0 ||
      VAR_8->d_reclen > VAR_10 ||
      VAR_8->d_reclen < FUNC_0(0, VAR_8)

      || VAR_8->d_namlen > VAR_3

      ) {
   FUNC_3(VAR_5, "Mangled directory: ");
   if ((VAR_8->d_reclen & 0x3) != 0)
    FUNC_3(VAR_5,
       "reclen not multiple of 4 ");
   if (VAR_8->d_reclen < FUNC_0(0, VAR_8))
    FUNC_3(VAR_5,
       "reclen less than DIRSIZ (%u < %zu) ",
       VAR_8->d_reclen, FUNC_0(0, VAR_8));

   if (VAR_8->d_namlen > VAR_3)
    FUNC_3(VAR_5,
       "reclen name too big (%u > %u) ",
       VAR_8->d_namlen, VAR_3);

   FUNC_3(VAR_5, "\n");
   VAR_9 += VAR_10;
   continue;
  }
  VAR_9 += VAR_8->d_reclen;
  if (VAR_8->d_ino != 0) {
   FUNC_1(VAR_8);
  }
 }
}
