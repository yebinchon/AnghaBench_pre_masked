
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdsp {scalar_t__ io_type; int firmware_rev; int dds_value; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hdsp*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct hdsp *VAR_3)
{
 FUNC_0 (VAR_3, VAR_2, 0);
 if (VAR_3->io_type == VAR_0 && VAR_3->firmware_rev >= 152)



  FUNC_0 (VAR_3, VAR_1, VAR_3->dds_value);
}
