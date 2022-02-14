
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_chain {int flags; scalar_t__ misalign; int off; scalar_t__ buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_2(struct evbuffer_chain *VAR_2)
{
 FUNC_0(!(VAR_2->flags & VAR_0));
 FUNC_0(!(VAR_2->flags & VAR_1));
 FUNC_1(VAR_2->buffer, VAR_2->buffer + VAR_2->misalign, VAR_2->off);
 VAR_2->misalign = 0;
}
