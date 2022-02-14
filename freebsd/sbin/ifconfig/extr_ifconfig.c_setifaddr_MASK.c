
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afswtch {scalar_t__ af_af; int (* af_getaddr ) (char const*,int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char const*,int ) ;

__attribute__((used)) static void
FUNC_1(const char *VAR_6, int VAR_7, int VAR_8, const struct afswtch *VAR_9)
{
 if (VAR_9->af_getaddr == ((void*)0))
  return;





 VAR_5++;
 if (VAR_4 == 0 && VAR_9->af_af != VAR_1)
  VAR_3 = 1;
 VAR_9->af_getaddr(VAR_6, (VAR_4 >= 0 ? VAR_0 : VAR_2));
}
