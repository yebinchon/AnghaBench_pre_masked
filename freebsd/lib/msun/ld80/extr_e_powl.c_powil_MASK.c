
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long double VAR_0 ;
 long double VAR_1 ;
 long double VAR_2 ;
 long double VAR_3 ;
 long double FUNC_0 (long double,int*) ;
 long double VAR_4 ;
 long double VAR_5 ;

__attribute__((used)) static long double
FUNC_1(long double VAR_6, int VAR_7)
{
long double VAR_8, VAR_9;
long double VAR_10;
int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

if( VAR_6 == 0.0L )
 {
 if( VAR_7 == 0 )
  return( 1.0L );
 else if( VAR_7 < 0 )
  return( VAR_0 );
 else
  return( 0.0L );
 }

if( VAR_7 == 0 )
 return( 1.0L );


if( VAR_6 < 0.0L )
 {
 VAR_14 = -1;
 VAR_6 = -VAR_6;
 }
else
 VAR_14 = 0;


if( VAR_7 < 0 )
 {
 VAR_13 = -1;
 VAR_11 = -VAR_7;
 }
else
 {
 VAR_13 = 1;
 VAR_11 = VAR_7;
 }




VAR_10 = VAR_6;
VAR_10 = FUNC_0( VAR_10, &VAR_15 );
VAR_12 = (VAR_15 - 1)*VAR_11;
if( (VAR_12 == 0) || (VAR_12 > 64) || (VAR_12 < -64) )
 {
 VAR_10 = (VAR_10 - 7.0710678118654752e-1L) / (VAR_10 + 7.0710678118654752e-1L);
 VAR_10 = (2.9142135623730950L * VAR_10 - 0.5L + VAR_15) * VAR_7 * VAR_1;
 }
else
 {
 VAR_10 = VAR_1 * VAR_12;
 }

if( VAR_10 > VAR_2 )
 return (VAR_4 * VAR_4);

if( VAR_10 < VAR_3 )
 return (VAR_5 * VAR_5);




if( VAR_10 < (-VAR_2+2.0L) )
 {
 VAR_6 = 1.0L/VAR_6;
 VAR_13 = -VAR_13;
 }


if( VAR_11 & 1 )
 VAR_9 = VAR_6;

else
 {
 VAR_9 = 1.0L;
 VAR_14 = 0;
 }

VAR_8 = VAR_6;
VAR_11 >>= 1;
while( VAR_11 )
 {
 VAR_8 = VAR_8 * VAR_8;
 if( VAR_11 & 1 )
  VAR_9 *= VAR_8;
 VAR_11 >>= 1;
 }

if( VAR_14 )
 VAR_9 = -VAR_9;
if( VAR_13 < 0 )
 VAR_9 = 1.0L/VAR_9;
return(VAR_9);
}
