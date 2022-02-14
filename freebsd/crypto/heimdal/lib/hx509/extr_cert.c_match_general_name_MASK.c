
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;


struct TYPE_21__ {int rdnSequence; } ;
struct TYPE_22__ {TYPE_5__ u; int element; } ;
struct TYPE_18__ {size_t length; char* data; } ;
struct TYPE_16__ {char* data; size_t length; } ;
struct TYPE_17__ {int value; int type_id; } ;
struct TYPE_23__ {TYPE_6__ directoryName; TYPE_2__ dNSName; TYPE_14__ rfc822Name; TYPE_1__ otherName; } ;
struct TYPE_25__ {int element; TYPE_7__ u; } ;
struct TYPE_20__ {int rdnSequence; } ;
struct TYPE_19__ {int length; int * data; } ;
struct TYPE_24__ {TYPE_4__ u; int element; TYPE_3__ _save; } ;
typedef TYPE_8__ Name ;
typedef TYPE_9__ GeneralName ;


 int VAR_0 ;
 int FUNC_0 (int) ;







 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_14__*,TYPE_14__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_8__*,TYPE_8__*) ;
 char* FUNC_5 (char*,char,size_t) ;
 int FUNC_6 (char const*,char*,size_t) ;

__attribute__((used)) static int
FUNC_7(const GeneralName *VAR_1, const GeneralName *VAR_2, int *VAR_3)
{




    FUNC_0(VAR_1->element == VAR_2->element);

    switch(VAR_1->element) {
    case 131:
 if (FUNC_1(&VAR_1->u.otherName.type_id,
    &VAR_2->u.otherName.type_id) != 0)
     return VAR_0;
 if (FUNC_3(&VAR_1->u.otherName.value,
    &VAR_2->u.otherName.value) != 0)
     return VAR_0;
 *VAR_3 = 1;
 return 0;
    case 129: {
 const char *VAR_4;
 size_t VAR_5, VAR_6;
 VAR_4 = FUNC_5(VAR_1->u.rfc822Name.data, '@', VAR_1->u.rfc822Name.length);
 if (VAR_4) {
     if (FUNC_2(&VAR_1->u.rfc822Name, &VAR_2->u.rfc822Name) != 0)
  return VAR_0;
 } else {
     VAR_4 = FUNC_5(VAR_2->u.rfc822Name.data, '@', VAR_2->u.rfc822Name.length);
     if (VAR_4 == ((void*)0))
  return VAR_0;
     VAR_5 = VAR_1->u.rfc822Name.length;
     VAR_6 = VAR_2->u.rfc822Name.length -
  (VAR_4 - ((char *)VAR_2->u.rfc822Name.data));
     if (VAR_5 > VAR_6)
  return VAR_0;
     if (FUNC_6(VAR_4 + 1 + VAR_6 - VAR_5, VAR_1->u.rfc822Name.data, VAR_5) != 0)
  return VAR_0;
     if (VAR_5 < VAR_6 && VAR_4[VAR_6 - VAR_5 + 1] != '.')
  return VAR_0;
 }
 *VAR_3 = 1;
 return 0;
    }
    case 134: {
 size_t VAR_7, VAR_8;
 char *VAR_9;

 VAR_7 = VAR_1->u.dNSName.length;
 VAR_8 = VAR_2->u.dNSName.length;
 if (VAR_7 > VAR_8)
     return VAR_0;
 VAR_9 = VAR_2->u.dNSName.data;
 if (FUNC_6(&VAR_9[VAR_8 - VAR_7], VAR_1->u.dNSName.data, VAR_7) != 0)
     return VAR_0;
 if (VAR_8 != VAR_7 && VAR_9[VAR_8 - VAR_7 - 1] != '.')
     return VAR_0;
 *VAR_3 = 1;
 return 0;
    }
    case 133: {
 Name VAR_10, VAR_11;
 int VAR_12;

 VAR_10._save.data = ((void*)0);
 VAR_10._save.length = 0;
 VAR_10.element = VAR_1->u.directoryName.element;
 VAR_10.u.rdnSequence = VAR_1->u.directoryName.u.rdnSequence;

 VAR_11._save.data = ((void*)0);
 VAR_11._save.length = 0;
 VAR_11.element = VAR_2->u.directoryName.element;
 VAR_11.u.rdnSequence = VAR_2->u.directoryName.u.rdnSequence;

 VAR_12 = FUNC_4(&VAR_10, &VAR_11);
 if (VAR_12 == 0)
     *VAR_3 = 1;
 return VAR_12;
    }
    case 128:
    case 132:
    case 130:
    default:
 return VAR_0;
    }
}
