
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer {scalar_t__ misalign; int orig_buffer; int buffer; int off; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static inline void
FUNC_1(struct evbuffer *VAR_0)
{
 FUNC_0(VAR_0->orig_buffer, VAR_0->buffer, VAR_0->off);
 VAR_0->buffer = VAR_0->orig_buffer;
 VAR_0->misalign = 0;
}
