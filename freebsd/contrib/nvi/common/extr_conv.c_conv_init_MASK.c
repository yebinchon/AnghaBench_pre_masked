
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ iconv_t ;
struct TYPE_9__ {scalar_t__* id; void* input2int; int int2file; void* file2int; int int2sys; void* sys2int; } ;
struct TYPE_8__ {TYPE_6__ conv; } ;
typedef TYPE_1__ SCR ;


 int FUNC_0 (TYPE_6__*,TYPE_6__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 void* VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (TYPE_1__*,int ,int ,int ,int ) ;
 void* VAR_11 ;
 char* FUNC_4 (int ,char*) ;
 int FUNC_5 (char*,char*) ;

void
FUNC_6(SCR *VAR_12, SCR *VAR_13)
{
 int VAR_14;

 if (VAR_12 == ((void*)0))
  FUNC_4(VAR_1, "");
 if (VAR_12 != ((void*)0))
  FUNC_0(&VAR_12->conv, &VAR_13->conv, 1);
 for (VAR_14 = 0; VAR_14 <= VAR_0; ++VAR_14)
  VAR_13->conv.id[VAR_14] = (iconv_t)-1;



}
