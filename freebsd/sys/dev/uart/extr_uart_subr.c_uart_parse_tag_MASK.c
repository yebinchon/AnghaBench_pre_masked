
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_0(const char **VAR_11)
{
 int VAR_12;

 if ((*VAR_11)[0] == 'b' && (*VAR_11)[1] == 'd') {
  VAR_12 = VAR_0;
  goto out;
 }
 if ((*VAR_11)[0] == 'b' && (*VAR_11)[1] == 'r') {
  VAR_12 = VAR_1;
  goto out;
 }
 if ((*VAR_11)[0] == 'c' && (*VAR_11)[1] == 'h') {
  VAR_12 = VAR_2;
  goto out;
 }
 if ((*VAR_11)[0] == 'd' && (*VAR_11)[1] == 'b') {
  VAR_12 = VAR_3;
  goto out;
 }
 if ((*VAR_11)[0] == 'd' && (*VAR_11)[1] == 't') {
  VAR_12 = VAR_4;
  goto out;
 }
 if ((*VAR_11)[0] == 'i' && (*VAR_11)[1] == 'o') {
  VAR_12 = VAR_5;
  goto out;
 }
 if ((*VAR_11)[0] == 'm' && (*VAR_11)[1] == 'm') {
  VAR_12 = VAR_6;
  goto out;
 }
 if ((*VAR_11)[0] == 'p' && (*VAR_11)[1] == 'a') {
  VAR_12 = VAR_7;
  goto out;
 }
 if ((*VAR_11)[0] == 'r' && (*VAR_11)[1] == 's') {
  VAR_12 = VAR_8;
  goto out;
 }
 if ((*VAR_11)[0] == 's' && (*VAR_11)[1] == 'b') {
  VAR_12 = VAR_9;
  goto out;
 }
 if ((*VAR_11)[0] == 'x' && (*VAR_11)[1] == 'o') {
  VAR_12 = VAR_10;
  goto out;
 }
 return (-1);

out:
 *VAR_11 += 2;
 if ((*VAR_11)[0] != ':')
  return (-1);
 (*VAR_11)++;
 return (VAR_12);
}
