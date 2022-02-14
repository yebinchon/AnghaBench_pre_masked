
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent {int timeout_read; int timeout_write; } ;



void
FUNC_0(struct bufferevent *VAR_0,
    int VAR_1, int VAR_2) {
 VAR_0->timeout_read = VAR_1;
 VAR_0->timeout_write = VAR_2;
}
