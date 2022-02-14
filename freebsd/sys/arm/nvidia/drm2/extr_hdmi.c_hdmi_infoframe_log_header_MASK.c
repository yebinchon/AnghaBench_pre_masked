
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_any_infoframe {int length; int version; int type; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct hdmi_any_infoframe *VAR_0)
{
 FUNC_1("HDMI infoframe: %s, version %u, length %u\n",
  FUNC_0(VAR_0->type),
  VAR_0->version, VAR_0->length);
}
