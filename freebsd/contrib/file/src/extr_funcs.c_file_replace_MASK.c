
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* buf; } ;
struct magic_set {TYPE_1__ o; } ;
struct TYPE_5__ {size_t rm_so; scalar_t__ rm_eo; } ;
typedef TYPE_2__ regmatch_t ;
typedef int file_regex_t ;


 int VAR_0 ;
 int FUNC_0 (struct magic_set*,char*,char const*,char*) ;
 int FUNC_1 (int *,char const*,int ) ;
 int FUNC_2 (int *,int,struct magic_set*) ;
 scalar_t__ FUNC_3 (int *,char*,int,TYPE_2__*,int ) ;
 int FUNC_4 (int *) ;

int
FUNC_5(struct magic_set *VAR_1, const char *VAR_2, const char *VAR_3)
{
 file_regex_t VAR_4;
 int VAR_5, VAR_6 = -1;

 VAR_5 = FUNC_1(&VAR_4, VAR_2, VAR_0);
 if (VAR_5) {
  FUNC_2(&VAR_4, VAR_5, VAR_1);
 } else {
  regmatch_t VAR_7;
  int VAR_8 = 0;
  while (FUNC_3(&VAR_4, VAR_1->o.buf, 1, &VAR_7, 0) == 0) {
   VAR_1->o.buf[VAR_7.rm_so] = '\0';
   if (FUNC_0(VAR_1, "%s%s", VAR_3,
       VAR_7.rm_eo != 0 ? VAR_1->o.buf + VAR_7.rm_eo : "") == -1)
    goto out;
   VAR_8++;
  }
  VAR_6 = VAR_8;
 }
out:
 FUNC_4(&VAR_4);
 return VAR_6;
}
