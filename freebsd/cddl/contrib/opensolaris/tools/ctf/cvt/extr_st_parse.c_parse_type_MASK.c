
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int t_id; scalar_t__ t_type; struct TYPE_8__* t_tdesc; void* t_name; } ;
typedef TYPE_1__ tdesc_t ;
typedef int iitype_t ;
struct TYPE_9__ {int ii_type; TYPE_1__* ii_dtype; int ii_name; } ;
typedef TYPE_2__ iidesc_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,char*) ;
 int VAR_4 ;
 char* FUNC_2 (char*,int*) ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (void*,int ) ;
 scalar_t__ FUNC_5 (int ,int,TYPE_1__*) ;
 int FUNC_6 (char*,int,TYPE_1__**) ;
 TYPE_1__* FUNC_7 (int) ;
 void* FUNC_8 (int ) ;

__attribute__((used)) static iitype_t
FUNC_9(char *VAR_5, iidesc_t *VAR_6)
{
 tdesc_t *VAR_7, *VAR_8;
 int VAR_9;

 if (*VAR_5++ != 't')
  FUNC_1("parse_type", "t (type)", VAR_5 - 1);

 VAR_5 = FUNC_2(VAR_5, &VAR_9);
 if ((VAR_7 = FUNC_3(VAR_9)) == ((void*)0)) {
  if (*VAR_5++ != '=')
   FUNC_1("parse_type", "= (definition)", VAR_5 - 1);

  (void) FUNC_6(VAR_5, VAR_9, &VAR_7);

  if (VAR_7->t_id == VAR_9) {
   FUNC_0(VAR_7->t_type != VAR_3);
   FUNC_0(!FUNC_3(VAR_7->t_id));

   if (!FUNC_4(VAR_7->t_name, VAR_6->ii_name)) {
    VAR_8 = FUNC_7(sizeof (*VAR_8));
    VAR_8->t_name = FUNC_8(VAR_6->ii_name);
    VAR_8->t_type = VAR_3;
    VAR_8->t_tdesc = VAR_7;
    VAR_7->t_id = VAR_4++;
    VAR_7 = VAR_8;
   }
  } else if (VAR_7->t_id == 0) {
   FUNC_0(VAR_7->t_type == VAR_0 ||
       VAR_7->t_type == VAR_2);

   if (VAR_7->t_name && !FUNC_4(VAR_7->t_name, VAR_6->ii_name)) {
    VAR_8 = FUNC_7(sizeof (*VAR_8));
    VAR_8->t_name = FUNC_8(VAR_6->ii_name);
    VAR_8->t_type = VAR_3;
    VAR_8->t_tdesc = VAR_7;
    VAR_7->t_id = VAR_4++;
    VAR_7 = VAR_8;
   }
  } else if (VAR_7->t_id != VAR_9) {
   VAR_8 = FUNC_7(sizeof (*VAR_8));
   VAR_8->t_name = FUNC_8(VAR_6->ii_name);
   VAR_8->t_type = VAR_3;
   VAR_8->t_tdesc = VAR_7;
   VAR_7 = VAR_8;
  }

  if (FUNC_5(VAR_6->ii_name, VAR_9, VAR_7) < 0)
   return (-1);
 }

 VAR_6->ii_type = VAR_1;
 VAR_6->ii_dtype = VAR_7;
 return (VAR_1);
}
