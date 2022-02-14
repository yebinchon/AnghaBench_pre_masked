
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pmac_gpio {int addr; int active_state; int active_val; int inactive_val; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (char*,char const*,...) ;
 long VAR_0 ;
 struct device_node* FUNC_1 (char const*) ;
 struct device_node* FUNC_2 (char const*) ;
 long FUNC_3 (struct device_node*,int ) ;
 int* FUNC_4 (struct device_node*,char const*,int *) ;
 int FUNC_5 (struct device_node*) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char*,char const*) ;

__attribute__((used)) static long FUNC_8(const char *VAR_1, const char *VAR_2,
    struct pmac_gpio *VAR_3, int VAR_4)
{
 struct device_node *VAR_5;
 const u32 *VAR_6;
 u32 VAR_7;
 long VAR_8;

 if (VAR_4)
  VAR_5 = FUNC_2(VAR_1);
 else
  VAR_5 = FUNC_1(VAR_1);
 if (! VAR_5) {
  FUNC_0("(W) cannot find audio device %s !\n", VAR_1);
  FUNC_7("cannot find device %s\n", VAR_1);
  return -VAR_0;
 }

 VAR_6 = FUNC_4(VAR_5, "AAPL,address", ((void*)0));
 if (! VAR_6) {
  VAR_6 = FUNC_4(VAR_5, "reg", ((void*)0));
  if (!VAR_6) {
   FUNC_0("(E) cannot find address for device %s !\n", VAR_1);
   FUNC_6("cannot find address for device %s\n", VAR_1);
   FUNC_5(VAR_5);
   return -VAR_0;
  }
  VAR_7 = *VAR_6;
  if (VAR_7 < 0x50)
   VAR_7 += 0x50;
 } else
  VAR_7 = *VAR_6;

 VAR_3->addr = VAR_7 & 0x0000ffff;

 VAR_6 = FUNC_4(VAR_5, "audio-gpio-active-state", ((void*)0));
 if (VAR_6) {
  VAR_3->active_state = *VAR_6;
  VAR_3->active_val = (*VAR_6) ? 0x5 : 0x4;
  VAR_3->inactive_val = (*VAR_6) ? 0x4 : 0x5;
 } else {
  const u32 *VAR_9 = ((void*)0);
  VAR_3->active_state = 0;
  VAR_3->active_val = 0x4;
  VAR_3->inactive_val = 0x5;




  if (VAR_2)
   VAR_9 = FUNC_4(VAR_5, VAR_2, ((void*)0));
  if (VAR_9) {
   if (VAR_9[3] == 0x9 && VAR_9[4] == 0x9) {
    VAR_3->active_val = 0xd;
    VAR_3->inactive_val = 0xc;
   }
   if (VAR_9[3] == 0x1 && VAR_9[4] == 0x1) {
    VAR_3->active_val = 0x5;
    VAR_3->inactive_val = 0x4;
   }
  }
 }

 FUNC_0("(I) GPIO device %s found, offset: %x, active state: %d !\n",
     VAR_1, VAR_3->addr, VAR_3->active_state);

 VAR_8 = FUNC_3(VAR_5, 0);
 FUNC_5(VAR_5);
 return VAR_8;
}
