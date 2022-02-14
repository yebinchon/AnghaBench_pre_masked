
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct sshbuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sshbuf*,scalar_t__) ;
 int FUNC_1 (struct sshbuf*,int ) ;

__attribute__((used)) static int
FUNC_2(struct sshbuf *VAR_3, u_int VAR_4, u_int VAR_5, u_int VAR_6)
{
 int VAR_7;

 if (VAR_4 != 0) {
  if ((VAR_7 = FUNC_1(VAR_3, VAR_1)) != 0 ||
      (VAR_7 = FUNC_0(VAR_3, VAR_4)) != 0)
   goto out;
 }
 if (VAR_5 != 0) {
  if ((VAR_7 = FUNC_1(VAR_3, VAR_0)) != 0)
   goto out;
 }
 if (VAR_6 != 0) {
  if ((VAR_7 = FUNC_1(VAR_3, VAR_2)) != 0 ||
      (VAR_7 = FUNC_0(VAR_3, VAR_6)) != 0)
   goto out;
 }
 VAR_7 = 0;
 out:
 return VAR_7;
}
