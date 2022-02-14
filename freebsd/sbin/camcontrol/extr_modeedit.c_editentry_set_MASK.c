
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long long ivalue; char* svalue; } ;
struct editentry {int type; TYPE_1__ value; int size; int editable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long long FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 struct editentry* FUNC_3 (char*) ;
 int VAR_4 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,char*,int ) ;
 int FUNC_9 (char*,char*,int ) ;
 long long FUNC_10 (char*,char**,int ) ;
 int FUNC_11 (char*,long long,char*,long long) ;

__attribute__((used)) static int
FUNC_12(char *VAR_5, char *VAR_6, int VAR_7)
{
 struct editentry *VAR_8;
 char *VAR_9;
 char *VAR_10;
 long long VAR_11, VAR_12;
 int VAR_13;







 FUNC_1(VAR_6 != ((void*)0));
 if (*VAR_6 == '\0')
  return (0);

 if ((VAR_8 = FUNC_3(VAR_5)) == ((void*)0))
  FUNC_7(VAR_1);
 if (!VAR_8->editable && VAR_7)
  FUNC_7(VAR_2);

 switch (VAR_8->type) {
 case 'i':
 case 'b':
 case 't':

  VAR_13 = (VAR_8->type == 'i')? 8: 1;
  VAR_11 = FUNC_10(VAR_6, &VAR_10, 0);
  if (*VAR_10 != '\0')
   FUNC_7(VAR_0);
  if (VAR_11 > ((1LL << (VAR_13 * (VAR_8->size))) - 1) || VAR_11 < 0) {
   VAR_12 = (VAR_11 < 0) ? 0 : ((1LL << (VAR_13 * (VAR_8->size))) - 1);
   FUNC_11("value %lld is out of range for entry %s; "
       "clipping to %lld", VAR_11, VAR_5, VAR_12);
   VAR_11 = VAR_12;
  }
  if (VAR_8->value.ivalue != VAR_11)
   VAR_4 = 1;
  VAR_8->value.ivalue = VAR_11;
  break;

 case 'c':
 case 'z':
  if ((VAR_9 = FUNC_6(VAR_8->size + 1)) == ((void*)0))
   FUNC_4(VAR_3, ((void*)0));
  FUNC_2(VAR_9, VAR_8->size + 1);
  FUNC_9(VAR_9, VAR_6, VAR_8->size);
  if (VAR_8->type == 'z') {

   char *VAR_14;

   for (VAR_14 = VAR_9 + VAR_8->size;
       VAR_14 >= VAR_9; VAR_14--) {
    if (*VAR_14 == ' ')
     *VAR_14 = '\0';
    else if (*VAR_14 != '\0')
     break;
   }
  }
  if (FUNC_8(VAR_8->value.svalue, VAR_9, VAR_8->size) == 0) {

   FUNC_5(VAR_9);
   break;
  }
  if (VAR_8->value.svalue != ((void*)0)) {

   FUNC_5(VAR_8->value.svalue);
   VAR_8->value.svalue = ((void*)0);
  }
  VAR_8->value.svalue = VAR_9;
  VAR_4 = 1;
  break;

 default:
  ;
 }

 return (0);

}
