
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option_data {size_t len; int* data; } ;


 int FUNC_0 (char*) ;

int
FUNC_1(struct option_data *VAR_0, size_t *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 size_t VAR_5, VAR_6;

 VAR_2 = 0;

 VAR_5 = *VAR_1;
 while (VAR_5 < VAR_0->len) {
  VAR_3 = VAR_0->data[VAR_5];
  if (VAR_3 == 0) {




   *VAR_1 = VAR_5 + 1;
   return (VAR_2);
  } else if (VAR_3 & 0xC0) {

   if (VAR_5 + 1 >= VAR_0->len) {

    FUNC_0("Truncated pointer in DHCP Domain "
        "Search option.");
    return (-1);
   }

   VAR_6 = ((VAR_3 & ~(0xC0)) << 8) +
       VAR_0->data[VAR_5 + 1];
   if (VAR_6 >= *VAR_1) {




    FUNC_0("Invalid forward pointer in DHCP "
        "Domain Search option compression.");
    return (-1);
   }

   VAR_4 = FUNC_1(VAR_0,
       &VAR_6);
   VAR_2 += VAR_4;

   *VAR_1 = VAR_5 + 2;
   return (VAR_2);
  }

  if (VAR_5 + VAR_3 >= VAR_0->len) {
   FUNC_0("Truncated label in DHCP Domain Search "
       "option.");
   return (-1);
  }





  VAR_2 += VAR_3 + 1;


  VAR_5 += VAR_3 + 1;
 }

 FUNC_0("Truncated DHCP Domain Search option.");

 return (-1);
}
