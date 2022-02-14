
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdb_dbinfo {struct hdb_dbinfo* next; } ;



struct hdb_dbinfo *
FUNC_0(struct hdb_dbinfo *VAR_0, struct hdb_dbinfo *VAR_1)
{
    if (VAR_1 == ((void*)0))
 return VAR_0;
    else
 return VAR_1->next;
}
