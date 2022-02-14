
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct message {scalar_t__ seqno; } ;


 int FUNC_0 (struct message*,size_t,int) ;
 int FUNC_1 (struct message*,size_t) ;

__attribute__((used)) static int FUNC_2(struct message *VAR_0, size_t VAR_1, int VAR_2)
{
 static uint8_t VAR_3;
 int VAR_4;

 VAR_0->seqno = VAR_3;
 do {
  VAR_4 = FUNC_1(VAR_0, VAR_1);
  if (VAR_4 != VAR_1)
   return VAR_4;

  VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 } while (VAR_4 <= 0 || VAR_0->seqno != VAR_3);

 VAR_3++;
 return VAR_4;
}
