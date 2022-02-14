
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evbuffer_chain {size_t buffer_len; size_t off; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct evbuffer_chain *VAR_1,
    size_t VAR_2)
{
 return VAR_1->buffer_len - VAR_1->off >= VAR_2 &&
     (VAR_1->off < VAR_1->buffer_len / 2) &&
     (VAR_1->off <= VAR_0);
}
