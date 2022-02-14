
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_22__ {size_t len; TYPE_7__* val; } ;
struct TYPE_23__ {TYPE_8__ rdnSequence; } ;
struct TYPE_21__ {size_t len; TYPE_1__* val; } ;
struct TYPE_19__ {size_t length; int * data; } ;
struct TYPE_18__ {size_t length; int * data; } ;
struct TYPE_17__ {char* data; size_t length; } ;
struct TYPE_16__ {char* data; size_t length; } ;
struct TYPE_20__ {char* utf8String; char* teletexString; TYPE_5__ universalString; TYPE_4__ bmpString; TYPE_3__ printableString; TYPE_2__ ia5String; } ;
struct TYPE_14__ {int element; TYPE_6__ u; } ;
struct TYPE_15__ {int type; TYPE_11__ value; } ;
struct TYPE_13__ {TYPE_9__ u; } ;
typedef TYPE_10__ Name ;
typedef TYPE_11__ DirectoryString ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char**,size_t*,char*,int,int) ;






 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (size_t) ;
 char* FUNC_5 (int *) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int const*,size_t,char*,int *) ;
 int FUNC_9 (int const*,size_t,size_t*) ;
 int FUNC_10 (int const*,size_t,char*,int *) ;
 int FUNC_11 (int const*,size_t,size_t*) ;

int
FUNC_12(const Name *VAR_1, char **VAR_2)
{
    size_t VAR_3 = 0;
    size_t VAR_4, VAR_5, VAR_6;
    int VAR_7;

    *VAR_2 = FUNC_6("");
    if (*VAR_2 == ((void*)0))
 return VAR_0;

    for (VAR_6 = VAR_1->u.rdnSequence.len; VAR_6 > 0; VAR_6--) {
 size_t VAR_8;
 VAR_4 = VAR_6 - 1;

 for (VAR_5 = 0; VAR_5 < VAR_1->u.rdnSequence.val[VAR_4].len; VAR_5++) {
     DirectoryString *VAR_9 = &VAR_1->u.rdnSequence.val[VAR_4].val[VAR_5].value;
     char *VAR_10;
     char *VAR_11;

     VAR_10 = FUNC_5(&VAR_1->u.rdnSequence.val[VAR_4].val[VAR_5].type);

     switch(VAR_9->element) {
     case 132:
  VAR_11 = VAR_9->u.ia5String.data;
  VAR_8 = VAR_9->u.ia5String.length;
  break;
     case 131:
  VAR_11 = VAR_9->u.printableString.data;
  VAR_8 = VAR_9->u.printableString.length;
  break;
     case 128:
  VAR_11 = VAR_9->u.utf8String;
  VAR_8 = FUNC_7(VAR_11);
  break;
     case 133: {
         const uint16_t *VAR_12 = VAR_9->u.bmpString.data;
  size_t VAR_13 = VAR_9->u.bmpString.length;
  size_t VAR_14;

  VAR_7 = FUNC_9(VAR_12, VAR_13, &VAR_14);
  if (VAR_7)
      return VAR_7;

  VAR_11 = FUNC_4(VAR_14 + 1);
  if (VAR_11 == ((void*)0))
      FUNC_0("allocation failure");
  VAR_7 = FUNC_8(VAR_12, VAR_13, VAR_11, ((void*)0));
  if (VAR_7) {
      FUNC_3(VAR_11);
      return VAR_7;
  }
  VAR_11[VAR_14] = '\0';
  VAR_8 = VAR_14;
  break;
     }
     case 130:
  VAR_11 = VAR_9->u.teletexString;
  VAR_8 = FUNC_7(VAR_11);
  break;
     case 129: {
         const uint32_t *VAR_15 = VAR_9->u.universalString.data;
  size_t VAR_16 = VAR_9->u.universalString.length;
  size_t VAR_17;

  VAR_7 = FUNC_11(VAR_15, VAR_16, &VAR_17);
  if (VAR_7)
      return VAR_7;

  VAR_11 = FUNC_4(VAR_17 + 1);
  if (VAR_11 == ((void*)0))
      FUNC_0("allocation failure");
  VAR_7 = FUNC_10(VAR_15, VAR_16, VAR_11, ((void*)0));
  if (VAR_7) {
      FUNC_3(VAR_11);
      return VAR_7;
  }
  VAR_11[VAR_17] = '\0';
  VAR_8 = VAR_17;
  break;
     }
     default:
  FUNC_0("unknown directory type: %d", VAR_9->element);
  FUNC_2(1);
     }
     FUNC_1(VAR_2, &VAR_3, VAR_10, FUNC_7(VAR_10), 0);
     FUNC_3(VAR_10);
     FUNC_1(VAR_2, &VAR_3, "=", 1, 0);
     FUNC_1(VAR_2, &VAR_3, VAR_11, VAR_8, 1);
     if (VAR_9->element == 133 ||
  VAR_9->element == 129)
     {
  FUNC_3(VAR_11);
     }
     if (VAR_5 + 1 < VAR_1->u.rdnSequence.val[VAR_4].len)
  FUNC_1(VAR_2, &VAR_3, "+", 1, 0);
 }

 if (VAR_4 > 0)
     FUNC_1(VAR_2, &VAR_3, ",", 1, 0);
    }
    return 0;
}
