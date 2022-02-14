
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct peer {scalar_t__ selbroken; scalar_t__ seldisptoolarge; scalar_t__ oldpkt; scalar_t__ bogusorg; scalar_t__ badauth; scalar_t__ processed; scalar_t__ received; scalar_t__ sent; int timereset; } ;


 int VAR_0 ;

void
FUNC_0(
 struct peer *VAR_1
 )
{
 if (VAR_1 == ((void*)0))
  return;

 VAR_1->timereset = VAR_0;
 VAR_1->sent = 0;
 VAR_1->received = 0;
 VAR_1->processed = 0;
 VAR_1->badauth = 0;
 VAR_1->bogusorg = 0;
 VAR_1->oldpkt = 0;
 VAR_1->seldisptoolarge = 0;
 VAR_1->selbroken = 0;
}
