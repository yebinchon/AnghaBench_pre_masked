
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct sshkey {int type; } ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct sshkey const*,int const*,size_t,int const*,size_t,int ) ;
 int FUNC_1 (struct sshkey const*,int const*,size_t,int const*,size_t,int ) ;
 int FUNC_2 (struct sshkey const*,int const*,size_t,int const*,size_t,int ) ;
 int FUNC_3 (struct sshkey const*,int const*,size_t,int const*,size_t,char const*) ;
 int FUNC_4 (struct sshkey const*,int const*,size_t,int const*,size_t,int ) ;

int
FUNC_5(const struct sshkey *VAR_3,
    const u_char *VAR_4, size_t VAR_5,
    const u_char *VAR_6, size_t VAR_7, const char *VAR_8, u_int VAR_9)
{
 if (VAR_5 == 0 || VAR_7 > VAR_2)
  return VAR_0;
 switch (VAR_3->type) {
 case 133:
 case 132:
  return FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_9);





 default:
  return VAR_1;
 }
}
