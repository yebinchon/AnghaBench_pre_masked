
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int depth; int q; scalar_t__ overflow; scalar_t__ tail; scalar_t__ head; } ;
struct tws_softc {TYPE_1__ aen_q; } ;
struct tws_event_packet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct tws_softc *VAR_4)
{
    VAR_4->aen_q.head=0;
    VAR_4->aen_q.tail=0;
    VAR_4->aen_q.depth=256;
    VAR_4->aen_q.overflow=0;
    VAR_4->aen_q.q = FUNC_0(sizeof(struct tws_event_packet)*VAR_4->aen_q.depth,
                              VAR_0, VAR_1 | VAR_2);
    return(VAR_3);
}
