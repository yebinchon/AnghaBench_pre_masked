
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfcomm_dev {int flags; } ;


 int VAR_0 ;
 struct rfcomm_dev* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rfcomm_dev*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static inline struct rfcomm_dev *FUNC_5(int VAR_2)
{
 struct rfcomm_dev *VAR_3;

 FUNC_1(&VAR_1);

 VAR_3 = FUNC_0(VAR_2);

 if (VAR_3) {
  if (FUNC_4(VAR_0, &VAR_3->flags))
   VAR_3 = ((void*)0);
  else
   FUNC_3(VAR_3);
 }

 FUNC_2(&VAR_1);

 return VAR_3;
}
