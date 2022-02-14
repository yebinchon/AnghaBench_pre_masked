
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdevsw {int dummy; } ;
typedef struct cdevsw video_switch_t ;
typedef struct cdevsw video_adapter_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cdevsw** VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cdevsw**,struct cdevsw**,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct cdevsw**,int ) ;
 struct cdevsw** FUNC_2 (int,int ,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int VAR_8 ;
 struct cdevsw** VAR_9 ;
 struct cdevsw** VAR_10 ;

__attribute__((used)) static int
FUNC_7(void)
{
 video_adapter_t **VAR_11;
 video_switch_t **VAR_12;



 int VAR_13;
 int VAR_14;

 if (!VAR_8)
  return VAR_1;

 VAR_14 = FUNC_5();
 VAR_13 = FUNC_4(VAR_6 + VAR_0, VAR_0);
 VAR_11 = FUNC_2(sizeof(*VAR_11)*VAR_13, VAR_2, VAR_3 | VAR_4);
 VAR_12 = FUNC_2(sizeof(*VAR_12)*VAR_13, VAR_2,
     VAR_3 | VAR_4);




 FUNC_0(VAR_5, VAR_11, sizeof(*VAR_5)*VAR_6);
 FUNC_0(VAR_10, VAR_12, sizeof(*VAR_10)*VAR_6);



 if (VAR_6 > 1) {
  FUNC_1(VAR_5, VAR_2);
  FUNC_1(VAR_10, VAR_2);



 }
 VAR_5 = VAR_11;
 VAR_10 = VAR_12;



 VAR_6 = VAR_13;
 FUNC_6(VAR_14);

 if (VAR_7)
  FUNC_3("fb: new array size %d\n", VAR_6);

 return 0;
}
