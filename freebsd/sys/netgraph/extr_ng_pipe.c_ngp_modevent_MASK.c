
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ngp_hdr {int dummy; } ;
struct ngp_fifo {int dummy; } ;
typedef int module_t ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (char*,int ,int *,int *,int *,int *,int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(module_t VAR_3, int VAR_4, void *VAR_5)
{
 int VAR_6 = 0;

 switch (VAR_4) {
 case 129:
  VAR_2 = FUNC_2("ng_pipe", FUNC_0(sizeof(struct ngp_hdr),
      sizeof (struct ngp_fifo)), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
      VAR_1, 0);
  if (VAR_2 == ((void*)0))
   FUNC_1("ng_pipe: couldn't allocate descriptor zone");
  break;
 case 128:
  FUNC_3(VAR_2);
  break;
 default:
  VAR_6 = VAR_0;
  break;
 }

 return (VAR_6);
}
