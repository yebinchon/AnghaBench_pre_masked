
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* tree ;
struct c_typespec {void* spec; void* kind; } ;
struct c_declspecs {int type_seen_p; } ;
typedef int c_parser ;
typedef scalar_t__ c_id_kind ;
struct TYPE_2__ {scalar_t__ id_kind; int keyword; void* value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct c_typespec FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 void* FUNC_7 (int *) ;
 TYPE_1__* FUNC_8 (int *) ;
 struct c_typespec FUNC_9 (int *) ;
 struct c_typespec FUNC_10 (int *) ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_11 (struct c_declspecs*,void*) ;
 int FUNC_12 (struct c_declspecs*,void*) ;
 int FUNC_13 (struct c_declspecs*,void*) ;
 int FUNC_14 (struct c_declspecs*,struct c_typespec) ;
 int FUNC_15 (scalar_t__) ;
 void* FUNC_16 (void*) ;
 void* FUNC_17 (void*,void*) ;

__attribute__((used)) static void
FUNC_18 (c_parser *VAR_9, struct c_declspecs *VAR_10,
      bool VAR_11, bool VAR_12, bool VAR_13)
{
  bool VAR_14 = VAR_13;
  bool VAR_15 = VAR_10->type_seen_p;
  while (FUNC_5 (VAR_9, VAR_2)
  || FUNC_5 (VAR_9, VAR_0)
  || (FUNC_1 () && FUNC_5 (VAR_9, VAR_1)))
    {
      struct c_typespec VAR_16;
      tree VAR_17;
      if (FUNC_5 (VAR_9, VAR_2))
 {
   tree VAR_18 = FUNC_8 (VAR_9)->value;
   c_id_kind VAR_19 = FUNC_8 (VAR_9)->id_kind;



   if (!VAR_12 || VAR_15
       || (VAR_19 != VAR_4 && VAR_19 != VAR_3))
     break;
   FUNC_3 (VAR_9);
   VAR_15 = 1;
   VAR_14 = 1;
   if (VAR_19 == VAR_4
       && (!FUNC_1 ()
    || FUNC_6 (VAR_9, VAR_1)))
     {
       VAR_16.kind = VAR_8;


       VAR_16.spec = FUNC_16 (VAR_18);
     }
   else
     {
       tree VAR_20 = VAR_5;
       FUNC_15 (FUNC_1 ());
       VAR_16.kind = VAR_6;
       if (FUNC_5 (VAR_9, VAR_1))
  VAR_20 = FUNC_7 (VAR_9);
       VAR_16.spec = FUNC_17 (VAR_18, VAR_20);
     }
   FUNC_14 (VAR_10, VAR_16);
   continue;
 }
      if (FUNC_5 (VAR_9, VAR_1))
 {


   tree VAR_21;
   FUNC_15 (FUNC_1 ());
   if (!VAR_12 || VAR_15)
     break;
   VAR_21 = FUNC_7 (VAR_9);
   VAR_16.kind = VAR_6;
   VAR_16.spec = FUNC_17 (VAR_5, VAR_21);
   FUNC_14 (VAR_10, VAR_16);
   continue;
 }
      FUNC_15 (FUNC_5 (VAR_9, VAR_0));
      switch (FUNC_8 (VAR_9)->keyword)
 {
 case 136:
 case 145:
 case 140:
 case 133:
 case 143:
 case 155:
 case 134:
   if (!VAR_11)
     goto out;
   VAR_14 = 1;



   FUNC_13 (VAR_10, FUNC_8 (VAR_9)->value);
   FUNC_3 (VAR_9);
   break;
 case 130:
 case 141:
 case 138:
 case 137:
 case 152:
 case 142:
 case 153:
 case 144:
 case 147:
 case 129:
 case 149:
 case 148:
 case 150:
 case 154:
   if (!VAR_12)
     goto out;
   VAR_14 = 1;
   VAR_15 = 1;
   FUNC_0 (1);
   VAR_16.kind = VAR_7;
   VAR_16.spec = FUNC_8 (VAR_9)->value;
   FUNC_14 (VAR_10, VAR_16);
   FUNC_3 (VAR_9);
   break;
 case 146:
   if (!VAR_12)
     goto out;
   VAR_14 = 1;
   VAR_15 = 1;
   VAR_16 = FUNC_4 (VAR_9);
   FUNC_14 (VAR_10, VAR_16);
   break;
 case 135:
 case 131:
   if (!VAR_12)
     goto out;
   VAR_14 = 1;
   VAR_15 = 1;
   VAR_16 = FUNC_9 (VAR_9);
   FUNC_14 (VAR_10, VAR_16);
   break;
 case 132:



   if (!VAR_12 || VAR_15)
     goto out;
   VAR_14 = 1;
   VAR_15 = 1;
   VAR_16 = FUNC_10 (VAR_9);
   FUNC_14 (VAR_10, VAR_16);
   break;
 case 151:
 case 128:
 case 139:
   VAR_14 = 1;
   FUNC_12 (VAR_10, FUNC_8 (VAR_9)->value);
   FUNC_3 (VAR_9);
   break;
 case 156:
   if (!VAR_14)
     goto out;
   VAR_17 = FUNC_2 (VAR_9);
   FUNC_11 (VAR_10, VAR_17);
   break;
 default:
   goto out;
 }
    }
 out: ;
}
