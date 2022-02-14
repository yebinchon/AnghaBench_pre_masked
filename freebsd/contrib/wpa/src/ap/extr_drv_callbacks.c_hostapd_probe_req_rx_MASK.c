
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct hostapd_data {size_t num_probereq_cb; TYPE_1__* probereq_cb; } ;
struct TYPE_2__ {scalar_t__ (* cb ) (int ,int const*,int const*,int const*,int const*,size_t,int) ;int ctx; } ;


 int VAR_0 ;
 int FUNC_0 (int const*,int ) ;
 scalar_t__ FUNC_1 (int ,int const*,int const*,int const*,int const*,size_t,int) ;

int FUNC_2(struct hostapd_data *VAR_1, const u8 *VAR_2, const u8 *VAR_3,
    const u8 *VAR_4, const u8 *VAR_5, size_t VAR_6,
    int VAR_7)
{
 size_t VAR_8;
 int VAR_9 = 0;

 if (VAR_2 == ((void*)0) || VAR_5 == ((void*)0))
  return -1;

 FUNC_0(VAR_2, VAR_0);
 for (VAR_8 = 0; VAR_1->probereq_cb && VAR_8 < VAR_1->num_probereq_cb; VAR_8++) {
  if (VAR_1->probereq_cb[VAR_8].cb(VAR_1->probereq_cb[VAR_8].ctx,
         VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
         VAR_7) > 0) {
   VAR_9 = 1;
   break;
  }
 }
 return VAR_9;
}
