
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct sbuf {int dummy; } ;
struct TYPE_2__ {int cim_la_size; } ;
struct adapter {TYPE_1__ params; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct adapter*) ;
 int FUNC_2 (int *,int ) ;
 int * FUNC_3 (int,int ,int) ;
 int FUNC_4 (struct adapter*,struct sbuf*,int *,int ) ;
 int FUNC_5 (struct adapter*,struct sbuf*,int *,int ) ;
 int FUNC_6 (struct adapter*,int ,int,int *) ;
 int FUNC_7 (struct adapter*,int *,int *) ;

__attribute__((used)) static int
FUNC_8(struct adapter *VAR_7, struct sbuf *VAR_8, int VAR_9)
{
 uint32_t VAR_10, *VAR_11;
 int VAR_12;

 VAR_12 = -FUNC_6(VAR_7, VAR_0, 1, &VAR_10);
 if (VAR_12 != 0)
  return (VAR_12);

 FUNC_0(VAR_9 == VAR_5 || VAR_9 == VAR_4);
 VAR_11 = FUNC_3(VAR_7->params.cim_la_size * sizeof(uint32_t), VAR_3,
     VAR_6 | VAR_9);
 if (VAR_11 == ((void*)0))
  return (VAR_2);

 VAR_12 = -FUNC_7(VAR_7, VAR_11, ((void*)0));
 if (VAR_12 != 0)
  goto done;
 if (FUNC_1(VAR_7) < VAR_1)
  FUNC_4(VAR_7, VAR_8, VAR_11, VAR_10);
 else
  FUNC_5(VAR_7, VAR_8, VAR_11, VAR_10);

done:
 FUNC_2(VAR_11, VAR_3);
 return (VAR_12);
}
