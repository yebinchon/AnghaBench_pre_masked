
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xencons_priv {struct xencons_interface* intf; } ;
struct xencons_interface {int out_cons; int out_prod; char* out; } ;
typedef int XENCONS_RING_IDX ;


 int FUNC_0 (int,char*) ;
 size_t FUNC_1 (int,char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct xencons_priv*) ;
 int FUNC_5 (struct xencons_priv*) ;

__attribute__((used)) static int
FUNC_6(struct xencons_priv *VAR_0, const char *VAR_1,
    unsigned int VAR_2)
{
 struct xencons_interface *VAR_3;
 XENCONS_RING_IDX VAR_4, VAR_5;
 int VAR_6;

 VAR_3 = VAR_0->intf;

 FUNC_4(VAR_0);

 VAR_4 = VAR_3->out_cons;
 VAR_5 = VAR_3->out_prod;

 FUNC_2();
 FUNC_0((VAR_5 - VAR_4) <= sizeof(VAR_3->out),
  ("console send ring inconsistent"));

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++, VAR_5++) {
  if ((VAR_5 - VAR_4) >= sizeof(VAR_3->out))
   break;
  VAR_3->out[FUNC_1(VAR_5, VAR_3->out)] = VAR_1[VAR_6];
 }

 FUNC_3();
 VAR_3->out_prod = VAR_5;

 FUNC_5(VAR_0);

 return (VAR_6);
}
