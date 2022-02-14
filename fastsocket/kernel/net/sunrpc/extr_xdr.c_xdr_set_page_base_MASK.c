
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int * iov; int * end; int * p; int * page_ptr; TYPE_1__* buf; } ;
typedef int __be32 ;
struct TYPE_2__ {unsigned int page_len; int * pages; scalar_t__ page_base; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct xdr_stream *VAR_4,
  unsigned int VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;
 void *VAR_11;

 VAR_8 = VAR_4->buf->page_len;
 if (VAR_5 >= VAR_8)
  return -VAR_0;
 VAR_8 -= VAR_5;
 if (VAR_6 > VAR_8)
  VAR_6 = VAR_8;

 VAR_5 += VAR_4->buf->page_base;

 VAR_7 = VAR_5 >> VAR_2;
 VAR_4->page_ptr = &VAR_4->buf->pages[VAR_7];
 VAR_11 = FUNC_0(*VAR_4->page_ptr);

 VAR_9 = VAR_5 & ~VAR_1;
 VAR_4->p = (__be32*)(VAR_11 + VAR_9);

 VAR_10 = VAR_9 + VAR_6;
 if (VAR_10 > VAR_3)
  VAR_10 = VAR_3;
 VAR_4->end = (__be32*)(VAR_11 + VAR_10);
 VAR_4->iov = ((void*)0);
 return 0;
}
