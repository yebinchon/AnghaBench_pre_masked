
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ts_ops {int owner; struct ts_config* (* init ) (void const*,unsigned int,int ,int) ;} ;
struct ts_config {struct ts_ops* ops; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ts_config* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct ts_config*) ;
 int FUNC_2 (struct ts_config*) ;
 int VAR_2 ;
 struct ts_ops* FUNC_3 (char const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char const*) ;
 struct ts_config* FUNC_6 (void const*,unsigned int,int ,int) ;

struct ts_config *FUNC_7(const char *VAR_3, const void *VAR_4,
         unsigned int VAR_5, gfp_t VAR_6, int VAR_7)
{
 int VAR_8 = -VAR_1;
 struct ts_config *VAR_9;
 struct ts_ops *VAR_10;

 if (VAR_5 == 0)
  return FUNC_0(-VAR_0);

 VAR_10 = FUNC_3(VAR_3);
 if (VAR_10 == ((void*)0))
  goto errout;

 VAR_9 = VAR_10->init(VAR_4, VAR_5, VAR_6, VAR_7);
 if (FUNC_1(VAR_9)) {
  VAR_8 = FUNC_2(VAR_9);
  goto errout;
 }

 VAR_9->ops = VAR_10;
 return VAR_9;

errout:
 if (VAR_10)
  FUNC_4(VAR_10->owner);

 return FUNC_0(VAR_8);
}
