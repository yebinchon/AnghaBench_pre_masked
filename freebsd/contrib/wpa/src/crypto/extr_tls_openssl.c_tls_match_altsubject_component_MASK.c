
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ stack_index_t ;
typedef int X509 ;
struct TYPE_6__ {TYPE_1__* ia5; } ;
struct TYPE_7__ {int type; TYPE_2__ d; } ;
struct TYPE_5__ {scalar_t__ data; } ;
typedef TYPE_3__ GENERAL_NAME ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *,int ,int *,int *) ;
 scalar_t__ FUNC_1 (char const*,scalar_t__,size_t) ;
 size_t FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (void*) ;
 int FUNC_4 (void*,int ) ;
 TYPE_3__* FUNC_5 (void*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(X509 *VAR_2, int VAR_3,
       const char *VAR_4, size_t VAR_5)
{
 GENERAL_NAME *VAR_6;
 void *VAR_7;
 int VAR_8 = 0;
 stack_index_t VAR_9;

 VAR_7 = FUNC_0(VAR_2, VAR_1, ((void*)0), ((void*)0));

 for (VAR_9 = 0; VAR_7 && VAR_9 < FUNC_3(VAR_7); VAR_9++) {
  VAR_6 = FUNC_5(VAR_7, VAR_9);
  if (VAR_6->type != VAR_3)
   continue;
  if (FUNC_2((char *) VAR_6->d.ia5->data) == VAR_5 &&
      FUNC_1(VAR_4, VAR_6->d.ia5->data, VAR_5) == 0)
   VAR_8++;
 }

 FUNC_4(VAR_7, VAR_0);

 return VAR_8;
}
