void
FUNC_0(void)
{
    int VAR_0;
    extern char VAR_1[], VAR_2[];

    for (VAR_0 = 0; VAR_0 < 256; VAR_0++) {
 if (VAR_2[VAR_0]) {
     if (FUNC_0(VAR_0))
  printf("resp DO_DONT %d: %d\n", FUNC_0(VAR_0), VAR_2[VAR_0]);
     else if (FUNC_0(VAR_0))
  FUNC_0("resp DO_DONT %d: %d\n", FUNC_0(VAR_0), VAR_2[VAR_0]);
     else
  FUNC_0("resp DO_DONT %d: %d\n", VAR_0,
    VAR_2[VAR_0]);
     if (FUNC_0(VAR_0)) {
  if (FUNC_0(VAR_0))
      FUNC_0("want DO   %d\n", FUNC_0(VAR_0));
  else if (FUNC_0(VAR_0))
      FUNC_0("want DO   %d\n", FUNC_0(VAR_0));
  else
      FUNC_0("want DO   %d\n", VAR_0);
     } else {
  if (FUNC_0(VAR_0))
      FUNC_0("want DONT %d\n", FUNC_0(VAR_0));
  else if (FUNC_0(VAR_0))
      FUNC_0("want DONT %d\n", FUNC_0(VAR_0));
  else
      FUNC_0("want DONT %d\n", VAR_0);
     }
 } else {
     if (FUNC_0(VAR_0)) {
  if (FUNC_0(VAR_0))
      FUNC_0("     DO   %d\n", FUNC_0(VAR_0));
  else if (FUNC_0(VAR_0))
      FUNC_0("     DO   %d\n", FUNC_0(VAR_0));
  else
      FUNC_0("     DO   %d\n", VAR_0);
     }
 }
 if (VAR_1[VAR_0]) {
     if (FUNC_0(VAR_0))
  FUNC_0("resp WILL_WONT %d: %d\n", FUNC_0(VAR_0), VAR_1[VAR_0]);
     else if (FUNC_0(VAR_0))
  FUNC_0("resp WILL_WONT %d: %d\n", FUNC_0(VAR_0), VAR_1[VAR_0]);
     else
  FUNC_0("resp WILL_WONT %d: %d\n",
    VAR_0, VAR_1[VAR_0]);
     if (FUNC_0(VAR_0)) {
  if (FUNC_0(VAR_0))
      FUNC_0("want WILL %d\n", FUNC_0(VAR_0));
  else if (FUNC_0(VAR_0))
      FUNC_0("want WILL %d\n", FUNC_0(VAR_0));
  else
      FUNC_0("want WILL %d\n", VAR_0);
     } else {
  if (FUNC_0(VAR_0))
      FUNC_0("want WONT %d\n", FUNC_0(VAR_0));
  else if (FUNC_0(VAR_0))
      FUNC_0("want WONT %d\n", FUNC_0(VAR_0));
  else
      FUNC_0("want WONT %d\n", VAR_0);
     }
 } else {
     if (FUNC_0(VAR_0)) {
  if (FUNC_0(VAR_0))
      FUNC_0("     WILL %d\n", FUNC_0(VAR_0));
  else if (FUNC_0(VAR_0))
      FUNC_0("     WILL %d\n", FUNC_0(VAR_0));
  else
      FUNC_0("     WILL %d\n", VAR_0);
     }
 }
    }

}
