
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet {struct option_data* options; } ;
struct option_data {scalar_t__ len; int * data; } ;


 size_t VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (struct packet*) ;
 int FUNC_2 (int ) ;

void
FUNC_3()
{
 int VAR_2;
 struct option_data VAR_3;
 struct packet VAR_4;

 VAR_3.data = ((void*)0);
 VAR_3.len = 0;
 VAR_4.options[VAR_0] = VAR_3;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 == 0)
  FUNC_1(&VAR_4);

 if (VAR_4.options[VAR_0].len != 0 ||
     VAR_4.options[VAR_0].data != ((void*)0))
  FUNC_0();
}
