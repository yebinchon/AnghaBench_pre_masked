
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_seq {int len; int readpos; scalar_t__ buffer; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 void* FUNC_0 (void*,scalar_t__,size_t) ;

__attribute__((used)) static ssize_t FUNC_1(struct trace_seq *VAR_2, void *VAR_3, size_t VAR_4)
{
 int VAR_5;
 void *VAR_6;

 if (VAR_2->len <= VAR_2->readpos)
  return -VAR_0;

 VAR_5 = VAR_2->len - VAR_2->readpos;
 if (VAR_4 > VAR_5)
  VAR_4 = VAR_5;
 VAR_6 = FUNC_0(VAR_3, VAR_2->buffer + VAR_2->readpos, VAR_4);
 if (!VAR_6)
  return -VAR_1;

 VAR_2->readpos += VAR_4;
 return VAR_4;
}
