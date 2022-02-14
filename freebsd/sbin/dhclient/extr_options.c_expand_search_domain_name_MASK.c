
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option_data {size_t len; int* data; } ;


 int FUNC_0 (unsigned char*,int*,int) ;

void
FUNC_1(struct option_data *VAR_0, size_t *VAR_1,
    unsigned char **VAR_2)
{
 int VAR_3;
 size_t VAR_4, VAR_5;
 unsigned char *VAR_6;






 VAR_4 = *VAR_1;
 VAR_6 = *VAR_2;
 while (VAR_4 < VAR_0->len) {
  VAR_3 = VAR_0->data[VAR_4];
  if (VAR_3 == 0) {




   *VAR_1 = VAR_4 + 1;
   *VAR_2 = VAR_6;
   return;
  } else if (VAR_3 & 0xC0) {

   VAR_5 = ((VAR_3 & ~(0xC0)) << 8) +
       VAR_0->data[VAR_4 + 1];

   FUNC_1(VAR_0, &VAR_5, &VAR_6);

   *VAR_1 = VAR_4 + 2;
   *VAR_2 = VAR_6;
   return;
  }


  FUNC_0(VAR_6, VAR_0->data + VAR_4 + 1, VAR_3);
  VAR_6[VAR_3] = '.';


  VAR_4 += VAR_3 + 1;
  VAR_6 += VAR_3 + 1;
 }
}
