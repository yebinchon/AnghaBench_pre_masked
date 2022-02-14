
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct datagram_entry {int resource; } ;


 int FUNC_0 (struct datagram_entry*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(void *VAR_0)
{
 struct datagram_entry *VAR_1;

 VAR_1 = (struct datagram_entry *)VAR_0;

 FUNC_0(VAR_1);

 FUNC_1(&VAR_1->resource);

 return (0);
}
