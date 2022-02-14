
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xs_dev_data {char* read_buffer; int ev_rsel; int read_cons; int read_prod; } ;


 int FUNC_0 (int,char*) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct xs_dev_data*) ;

__attribute__((used)) static void
FUNC_4(struct xs_dev_data *VAR_0, const char *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++, VAR_0->read_prod++)
  VAR_0->read_buffer[FUNC_1(VAR_0->read_prod)] = VAR_1[VAR_3];

 FUNC_0((VAR_0->read_prod - VAR_0->read_cons) <= sizeof(VAR_0->read_buffer),
     ("xenstore reply too big"));

 FUNC_3(VAR_0);
 FUNC_2(&VAR_0->ev_rsel);
}
