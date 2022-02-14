
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_channel_data {int const chan; } ;


 unsigned int FUNC_0 (int const*) ;

__attribute__((used)) static int FUNC_1(const struct hostapd_channel_data *VAR_0)
{
 const int VAR_1[] = { 36, 52, 100, 116, 132, 149 };
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++)
  if (VAR_0->chan == VAR_1[VAR_2])
   return 1;

 return 0;
}
