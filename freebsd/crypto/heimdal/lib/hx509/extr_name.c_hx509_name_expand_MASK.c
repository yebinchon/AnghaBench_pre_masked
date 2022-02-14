
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct rk_strpool {int dummy; } ;
typedef TYPE_6__* hx509_name ;
typedef int * hx509_env ;
typedef int hx509_context ;
struct TYPE_14__ {char* utf8String; } ;
struct TYPE_17__ {scalar_t__ element; TYPE_5__ u; } ;
struct TYPE_12__ {size_t len; TYPE_2__* val; } ;
struct TYPE_13__ {TYPE_3__ rdnSequence; } ;
struct TYPE_16__ {scalar_t__ element; TYPE_4__ u; } ;
struct TYPE_15__ {TYPE_7__ der_name; } ;
struct TYPE_11__ {size_t len; TYPE_1__* val; } ;
struct TYPE_10__ {TYPE_8__ value; } ;
typedef TYPE_7__ Name ;
typedef TYPE_8__ DirectoryString ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int ,int *,char*,int) ;
 int FUNC_2 (int ,int ,int,char*,...) ;
 char* FUNC_3 (struct rk_strpool*) ;
 int FUNC_4 (struct rk_strpool*) ;
 struct rk_strpool* FUNC_5 (struct rk_strpool*,char*,...) ;
 char* FUNC_6 (char*,char) ;
 char* FUNC_7 (char*,char*) ;

int
FUNC_8(hx509_context VAR_4,
    hx509_name VAR_5,
    hx509_env VAR_6)
{
    Name *VAR_7 = &VAR_5->der_name;
    size_t VAR_8, VAR_9;

    if (VAR_6 == ((void*)0))
 return 0;

    if (VAR_7->element != VAR_3) {
 FUNC_2(VAR_4, 0, VAR_0, "RDN not of supported type");
 return VAR_0;
    }

    for (VAR_8 = 0 ; VAR_8 < VAR_7->u.rdnSequence.len; VAR_8++) {
 for (VAR_9 = 0; VAR_9 < VAR_7->u.rdnSequence.val[VAR_8].len; VAR_9++) {
     DirectoryString *VAR_10 = &VAR_7->u.rdnSequence.val[VAR_8].val[VAR_9].value;
     char *VAR_11, *VAR_12;
     struct rk_strpool *VAR_13 = ((void*)0);

     if (VAR_10->element != VAR_2) {
  FUNC_2(VAR_4, 0, VAR_0, "unsupported type");
  return VAR_0;
     }
     VAR_11 = FUNC_7(VAR_10->u.utf8String, "${");
     if (VAR_11) {
  VAR_13 = FUNC_5(VAR_13, "%.*s",
        (int)(VAR_11 - VAR_10->u.utf8String),
        VAR_10->u.utf8String);
  if (VAR_13 == ((void*)0)) {
      FUNC_2(VAR_4, 0, VAR_1, "out of memory");
      return VAR_1;
  }
     }
     while (VAR_11 != ((void*)0)) {

  const char *VAR_14;
  VAR_12 = FUNC_6(VAR_11, '}');
  if (VAR_12 == ((void*)0)) {
      FUNC_2(VAR_4, 0, VAR_0, "missing }");
      FUNC_4(VAR_13);
      return VAR_0;
  }
  VAR_11 += 2;
  VAR_14 = FUNC_1(VAR_4, VAR_6, VAR_11, VAR_12 - VAR_11);
  if (VAR_14 == ((void*)0)) {
      FUNC_2(VAR_4, 0, VAR_0,
        "variable %.*s missing",
        (int)(VAR_12 - VAR_11), VAR_11);
      FUNC_4(VAR_13);
      return VAR_0;
  }
  VAR_13 = FUNC_5(VAR_13, "%s", VAR_14);
  if (VAR_13 == ((void*)0)) {
      FUNC_2(VAR_4, 0, VAR_1, "out of memory");
      return VAR_1;
  }
  VAR_12++;

  VAR_11 = FUNC_7(VAR_12, "${");
  if (VAR_11)
      VAR_13 = FUNC_5(VAR_13, "%.*s",
            (int)(VAR_11 - VAR_12), VAR_12);
  else
      VAR_13 = FUNC_5(VAR_13, "%s", VAR_12);
  if (VAR_13 == ((void*)0)) {
      FUNC_2(VAR_4, 0, VAR_1, "out of memory");
      return VAR_1;
  }
     }
     if (VAR_13) {
  FUNC_0(VAR_10->u.utf8String);
  VAR_10->u.utf8String = FUNC_3(VAR_13);
  if (VAR_10->u.utf8String == ((void*)0)) {
      FUNC_2(VAR_4, 0, VAR_1, "out of memory");
      return VAR_1;
  }
     }
 }
    }
    return 0;
}
