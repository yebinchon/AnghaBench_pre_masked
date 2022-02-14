
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct malloc_type {int dummy; } ;
struct fw_xferlist {int dummy; } ;
struct fw_xfer {void (* hand ) (struct fw_xfer*) ;void* sc; struct firewire_comm* fc; } ;
struct firewire_comm {int dummy; } ;


 int FUNC_0 (struct fw_xferlist*,struct fw_xfer*,int ) ;
 struct fw_xfer* FUNC_1 (struct malloc_type*,int,int) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;

int
FUNC_4(struct fw_xferlist *VAR_1, struct malloc_type *VAR_2,
    int VAR_3, int VAR_4, int VAR_5,
    struct firewire_comm *VAR_6, void *VAR_7, void (*VAR_8)(struct fw_xfer *))
{
 int VAR_9, VAR_10;
 struct fw_xfer *VAR_11;

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  VAR_11 = FUNC_1(VAR_2, VAR_3, VAR_4);
  if (VAR_11 == ((void*)0))
   return (VAR_9);
  VAR_11->fc = VAR_6;
  VAR_11->sc = VAR_7;
  VAR_11->hand = VAR_8;
  VAR_10 = FUNC_2();
  FUNC_0(VAR_1, VAR_11, VAR_0);
  FUNC_3(VAR_10);
 }
 return (VAR_5);
}
