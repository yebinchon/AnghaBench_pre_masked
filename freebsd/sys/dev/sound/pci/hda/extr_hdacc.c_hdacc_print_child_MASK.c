
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdacc_fg {int nid; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 struct hdacc_fg* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0, device_t VAR_1)
{
 struct hdacc_fg *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 VAR_3 += FUNC_3(" at nid %d", VAR_2->nid);
 VAR_3 += FUNC_0(VAR_0, VAR_1);

 return (VAR_3);
}
