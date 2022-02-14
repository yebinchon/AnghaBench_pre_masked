
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet {struct option_data* options; } ;
struct option_data {unsigned char* data; size_t len; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct option_data*,size_t*,unsigned char**) ;
 int FUNC_2 (struct option_data*,size_t*) ;
 int FUNC_3 (unsigned char*) ;
 unsigned char* FUNC_4 (int) ;

void
FUNC_5(struct packet *VAR_1)
{
 size_t VAR_2;
 int VAR_3, VAR_4;
 struct option_data *VAR_5;
 unsigned char *VAR_6, *VAR_7;

 if (VAR_1->options[VAR_0].data == ((void*)0))
  return;

 VAR_5 = &VAR_1->options[VAR_0];


 VAR_3 = 0;
 VAR_2 = 0;
 while (VAR_2 < VAR_5->len) {
  VAR_4 = FUNC_2(VAR_5, &VAR_2);
  if (VAR_4 < 0)

   return;


  VAR_3 += VAR_4 + 1;
 }
 if (VAR_3 > 0)

  --VAR_3;

 VAR_6 = FUNC_4(VAR_3 + 1);
 if (VAR_6 == ((void*)0))
  FUNC_0("Can't allocate storage for expanded domain-search\n");

 VAR_2 = 0;
 VAR_7 = VAR_6;
 while (VAR_2 < VAR_5->len) {
  FUNC_1(VAR_5, &VAR_2, &VAR_7);
  VAR_7[0] = ' ';
  VAR_7++;
 }
 VAR_6[VAR_3] = '\0';

 FUNC_3(VAR_5->data);
 VAR_5->len = VAR_3;
 VAR_5->data = VAR_6;
}
