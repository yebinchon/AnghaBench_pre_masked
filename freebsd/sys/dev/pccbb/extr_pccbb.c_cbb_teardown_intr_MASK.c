
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct cbb_intrhand {int cookie; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,struct resource*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cbb_intrhand*,int ) ;

int
FUNC_3(device_t VAR_1, device_t VAR_2, struct resource *VAR_3,
    void *VAR_4)
{
 struct cbb_intrhand *VAR_5;
 int VAR_6;


 VAR_5 = (struct cbb_intrhand *) VAR_4;
 VAR_6 = FUNC_0(FUNC_1(VAR_1), VAR_2, VAR_3,
     VAR_5->cookie);
 if (VAR_6 != 0)
  return (VAR_6);
 FUNC_2(VAR_5, VAR_0);
 return (0);
}
