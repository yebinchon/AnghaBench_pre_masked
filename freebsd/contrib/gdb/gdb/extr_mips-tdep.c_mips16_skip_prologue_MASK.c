
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 unsigned short FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static CORE_ADDR
FUNC_2 (CORE_ADDR VAR_1)
{
  CORE_ADDR VAR_2;
  int VAR_3 = 0;
  int VAR_4;


  static struct
  {
    unsigned short inst;
    unsigned short mask;
  }
  VAR_5[] =
  {
    {
    0x6300, 0xff00}
    ,
    {
    0xfb00, 0xff00}
    ,
    {
    0xd000, 0xf800}
    ,
    {
    0xf900, 0xff00}
    ,
    {
    0x6200, 0xff00}
    ,
    {
    0xfa00, 0xff00}
    ,
    {
    0x673d, 0xffff}
    ,
    {
    0xd980, 0xff80}
    ,
    {
    0x6704, 0xff1c}
    ,
    {
    0xe809, 0xf81f}
    ,
    {
    0x0100, 0xff00}
    ,
    {
    0, 0}
  };


  VAR_2 = FUNC_1 (VAR_1);
  if (VAR_2 == 0)
    VAR_2 = VAR_1 + 100;




  for (; VAR_1 < VAR_2; VAR_1 += VAR_0)
    {
      unsigned short VAR_6;
      int VAR_7;

      VAR_6 = FUNC_0 (VAR_1);





      if ((VAR_6 & 0xf800) == 0xf000)
 {
   VAR_3 = VAR_0;
   continue;
 }
      VAR_4 = VAR_3;
      VAR_3 = 0;


      for (VAR_7 = 0; VAR_5[VAR_7].mask != 0; VAR_7++)
 if ((VAR_6 & VAR_5[VAR_7].mask) == VAR_5[VAR_7].inst)
   break;
      if (VAR_5[VAR_7].mask != 0)
 continue;
      else

 {


   return VAR_1 - VAR_4;
 }
    }
  return VAR_1;
}
