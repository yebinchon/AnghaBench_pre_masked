
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct camcontrol_opts {char* subopt; int argnum; int cmdnum; int * optname; } ;
typedef int camcontrol_optret ;
typedef int cam_argmask ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,char*,int ) ;

camcontrol_optret
FUNC_2(struct camcontrol_opts *VAR_3, char *VAR_4, uint32_t *VAR_5,
   cam_argmask *VAR_6, const char **VAR_7)
{
 struct camcontrol_opts *VAR_8;
 int VAR_9 = 0;

 for (VAR_8 = VAR_3; (VAR_8 != ((void*)0)) && (VAR_8->optname != ((void*)0));
      VAR_8++) {
  if (FUNC_1(VAR_8->optname, VAR_4, FUNC_0(VAR_4)) == 0) {
   *VAR_5 = VAR_8->cmdnum;
   *VAR_6 = VAR_8->argnum;
   *VAR_7 = VAR_8->subopt;
   if (++VAR_9 > 1)
    return (VAR_0);
  }
 }

 if (VAR_9 > 0)
  return (VAR_1);
 else
  return (VAR_2);
}
