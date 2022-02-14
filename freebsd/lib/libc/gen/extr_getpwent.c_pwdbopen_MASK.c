
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int (* get ) (TYPE_2__*,TYPE_1__*,TYPE_1__*,int ) ;int (* close ) (TYPE_2__*) ;} ;
struct TYPE_9__ {scalar_t__ data; int size; } ;
typedef TYPE_1__ DBT ;
typedef TYPE_2__ DB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_2__* FUNC_0 (int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_2__*,TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static DB *
FUNC_7(int *VAR_7)
{
 DB *VAR_8;
 DBT VAR_9, VAR_10;
 int VAR_11;

 if (FUNC_1() != 0 ||
     (VAR_8 = FUNC_0(VAR_4, VAR_2, 0, VAR_0, ((void*)0))) == ((void*)0))
  VAR_8 = FUNC_0(VAR_3, VAR_2, 0, VAR_0, ((void*)0));
 if (VAR_8 == ((void*)0))
  return (((void*)0));
 VAR_9.data = VAR_5;
 VAR_9.size = FUNC_3(VAR_5);
 VAR_11 = VAR_8->get(VAR_8, &VAR_9, &VAR_10, 0);
 if (VAR_11 == 0)
  *VAR_7 = *(unsigned char *)VAR_10.data;
 else
  *VAR_7 = 3;
 if (*VAR_7 < 3 ||
     *VAR_7 >= FUNC_2(VAR_6)) {
  FUNC_6(VAR_1, "Unsupported password database version %d",
      *VAR_7);
  VAR_8->close(VAR_8);
  VAR_8 = ((void*)0);
 }
 return (VAR_8);
}
