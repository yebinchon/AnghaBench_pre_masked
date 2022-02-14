
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_pchinfo {int fmt; int spd; scalar_t__ rslot; scalar_t__ lslot; int buffer; } ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int,int,int,int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct sc_pchinfo *VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5;
 bus_addr_t VAR_6;

 VAR_2 = (FUNC_0(VAR_1->fmt) > 1)? 1 : 0;
 VAR_3 = (VAR_1->fmt & VAR_0)? 1 : 0;
 VAR_4 = VAR_2? 1 : 0;
 VAR_6 = FUNC_2(VAR_1->buffer);
 VAR_5 = FUNC_3(VAR_1->buffer);

 FUNC_1(VAR_1->lslot, VAR_4, VAR_2, VAR_3, VAR_1->spd, VAR_6, VAR_5);
 FUNC_1(VAR_1->lslot + 1, VAR_4, VAR_2, VAR_3, VAR_1->spd, VAR_6, VAR_5);
 FUNC_1(VAR_1->rslot, 2, VAR_2, VAR_3, VAR_1->spd, VAR_6, VAR_5);
 FUNC_1(VAR_1->rslot + 1, 2, VAR_2, VAR_3, VAR_1->spd, VAR_6, VAR_5);
}
