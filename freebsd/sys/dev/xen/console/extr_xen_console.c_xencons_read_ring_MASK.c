
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xencons_priv {struct xencons_interface* intf; } ;
struct xencons_interface {scalar_t__ in_cons; scalar_t__ in_prod; char* in; } ;
typedef scalar_t__ XENCONS_RING_IDX ;


 size_t FUNC_0 (scalar_t__,char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct xencons_priv*) ;
 int FUNC_4 (struct xencons_priv*) ;

__attribute__((used)) static int
FUNC_5(struct xencons_priv *VAR_0, char *VAR_1, unsigned int VAR_2)
{
 struct xencons_interface *VAR_3;
 XENCONS_RING_IDX VAR_4, VAR_5;
 unsigned int VAR_6;

 VAR_3 = VAR_0->intf;

 FUNC_3(VAR_0);

 VAR_4 = VAR_3->in_cons;
 VAR_5 = VAR_3->in_prod;
 FUNC_1();

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++, VAR_4++) {
  if (VAR_5 == VAR_4)
   break;
  VAR_1[VAR_6] = VAR_3->in[FUNC_0(VAR_4, VAR_3->in)];
 }

 FUNC_2();
 VAR_3->in_cons = VAR_4;


 if (VAR_6 != 0)
  FUNC_4(VAR_0);

 return (VAR_6);
}
