
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* tree ;
struct TYPE_2__ {void* x_current_class_ref; void* x_current_class_ptr; } ;


 int FUNC_0 (void*) ;
 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_1 (void*,void*) ;
 TYPE_1__* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (void*) ;
 int FUNC_3 () ;
 int FUNC_4 (void*) ;
 int FUNC_5 (int ) ;
 int VAR_7 ;
 void* FUNC_6 (void*,int ,int ,void*,int) ;

tree
FUNC_7 (tree VAR_8, tree VAR_9, tree VAR_10)
{
  tree VAR_11 = VAR_0;
  tree VAR_12 = VAR_0;
  FUNC_4 (VAR_8);

  if (VAR_1)
    {
      VAR_11 = VAR_3;
      VAR_2->x_current_class_ptr = VAR_0;
      VAR_12 = VAR_4;
      VAR_2->x_current_class_ref = VAR_0;
    }

  FUNC_5(VAR_5);





  ++VAR_6;
  VAR_10 = FUNC_6 (VAR_10, FUNC_0 (VAR_8),
       VAR_7, VAR_0,
                                          0);
  --VAR_6;
  FUNC_3();


  if (VAR_1)
    {
      VAR_2->x_current_class_ptr = VAR_11;
      VAR_2->x_current_class_ref = VAR_12;
    }

  FUNC_2 (VAR_8);


  VAR_10 = FUNC_1 (VAR_9, VAR_10);

  return VAR_10;
}
