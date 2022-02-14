
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int parent; } ;
typedef TYPE_1__ jsmntok_t ;
typedef int jsmnerr_t ;
struct TYPE_10__ {int pos; int toksuper; } ;
typedef TYPE_2__ jsmn_parser ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (TYPE_2__*,TYPE_1__*,size_t) ;
 int FUNC_1 (TYPE_1__*,int ,int,int) ;

__attribute__((used)) static jsmnerr_t FUNC_2(jsmn_parser *VAR_4, const char *VAR_5,
  size_t VAR_6, jsmntok_t *VAR_7, size_t VAR_8) {
 jsmntok_t *VAR_9;

 int VAR_10 = VAR_4->pos;

 VAR_4->pos++;


 for (; VAR_4->pos < VAR_6 && VAR_5[VAR_4->pos] != '\0'; VAR_4->pos++) {
  char VAR_11 = VAR_5[VAR_4->pos];


  if (VAR_11 == '\"') {
   if (VAR_7 == ((void*)0)) {
    return 0;
   }
   VAR_9 = FUNC_0(VAR_4, VAR_7, VAR_8);
   if (VAR_9 == ((void*)0)) {
    VAR_4->pos = VAR_10;
    return VAR_1;
   }
   FUNC_1(VAR_9, VAR_3, VAR_10+1, VAR_4->pos);



   return 0;
  }


  if (VAR_11 == '\\' && VAR_4->pos + 1 < VAR_6) {
   int VAR_12;
   VAR_4->pos++;
   switch (VAR_5[VAR_4->pos]) {

    case '\"': case '/' : case '\\' : case 'b' :
    case 'f' : case 'r' : case 'n' : case 't' :
     break;

    case 'u':
     VAR_4->pos++;
     for(VAR_12 = 0; VAR_12 < 4 && VAR_4->pos < VAR_6 && VAR_5[VAR_4->pos] != '\0'; VAR_12++) {

      if(!((VAR_5[VAR_4->pos] >= 48 && VAR_5[VAR_4->pos] <= 57) ||
         (VAR_5[VAR_4->pos] >= 65 && VAR_5[VAR_4->pos] <= 70) ||
         (VAR_5[VAR_4->pos] >= 97 && VAR_5[VAR_4->pos] <= 102))) {
       VAR_4->pos = VAR_10;
       return VAR_0;
      }
      VAR_4->pos++;
     }
     VAR_4->pos--;
     break;

    default:
     VAR_4->pos = VAR_10;
     return VAR_0;
   }
  }
 }
 VAR_4->pos = VAR_10;
 return VAR_2;
}
